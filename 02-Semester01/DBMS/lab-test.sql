CREATE TABLE CUSTOMER( 
    customerno INT PRIMARY KEY,
    cname VARCHAR(30) NOT NULL
);

CREATE TABLE CUST_ORDER(
    orderno INT PRIMARY KEY,
    odate DATE NOT NULL,
    customerno INT,
    ord_amt INT NOT NULL,
    FOREIGN KEY (customerno) REFERENCES CUSTOMER(customerno)
);

CREATE TABLE ITEM(
    itemno INT PRIMARY KEY,
    item_name VARCHAR(30) NOT NULL,
    unit_price INT NOT NULL
);

CREATE TABLE ORDER_ITEM(
    orderno INT,
    itemno INT,
    qty INT,
    FOREIGN KEY (orderno) REFERENCES CUST_ORDER(orderno),
    FOREIGN KEY (itemno) REFERENCES ITEM(itemno)
);

INSERT INTO cust_order
VALUES
(1004,'03-05-2005',103,346);

SELECT * FROM CUSTOMER
WHERE cname LIKE 'C%';

SELECT * FROM ITEM
WHERE unit_price > 25;

SELECT * FROM ITEM
WHERE unit_price < (select AVG(unit_price) FROM ITEM);


SELECT orderno, COUNT(orderno) AS OrderCount
FROM CUST_ORDER
GROUP BY orderno
ORDER BY orderno DESC;
