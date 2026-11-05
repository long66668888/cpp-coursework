prices = [10.0, 10.2, 10.1, 10.5, 10.8, 10.6, 11.0, 11.4, 11.2, 10.9,
          11.1, 10.7, 10.4, 10.6, 10.9, 11.3, 11.6, 11.8, 12.0, 12.3]

def check_rule(prices, window=5):
    for i in range(window, len(prices)):
        avg = sum(prices[i-window:i]) / window
        if prices[i] < avg:
            print(f"第{i}天：价格{prices[i]}跌破{window}日均线{avg:.2f}，触发提醒")

check_rule(prices)
