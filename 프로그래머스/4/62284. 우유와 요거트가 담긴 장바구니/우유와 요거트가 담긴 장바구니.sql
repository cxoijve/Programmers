-- 우유(Milk)와 요거트(Yogurt)를 동시에 구입한 장바구니가 있는지
-- 우유와 요거트를 동시에 구입한 장바구니의 아이디를 조회

SELECT CART_ID
FROM CART_PRODUCTS
WHERE NAME IN ('Milk', 'Yogurt')
GROUP BY CART_ID
HAVING COUNT(DISTINCT NAME) = 2
ORDER BY CART_ID