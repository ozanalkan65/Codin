CART = "es1_cart.dat"
OFFERS = "es1_offers.dat"
PRICES = "es1_prices.dat"
price_dict = dict()
offer_dict = dict()
cart_list = list()
processed_order = list()
def offer_file(order):
    try:
        with open(OFFERS) as offer_file:
            for items in offer_file:
                left , right = items.split(": ")
                left_items = left.split()
                right_items = right.strip()
                free_items = len(left_items)
                for item in left_items:
                    processed_order.append(item)
                processed_order.extend([right_items] * free_items)
            return processed_order
    except OSError as err:
        print(f"Error type is: {err}")
def cart_file():
    try:
        with open(CART) as cart_file:
            for items in cart_file:
                cart_list.append(items.strip())
            return cart_list
    except OSError as err:
        print(f"Error type is: {err}")
def main():
    try:
        with(open(PRICES)) as price_file:
            for items in price_file:
                item,price = items.split(": ")
                price_dict[item] = price.strip()
    except OSError as err:
        print(f"Error type is: {err}")
    cart_file()
    counter = 0
    for item in cart_list:
        counter += float(price_dict[item])
    processed_order = offer_file(cart_list)
    print(processed_order)




if __name__ == '__main__':
    main()