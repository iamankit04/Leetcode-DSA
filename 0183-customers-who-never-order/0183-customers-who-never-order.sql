select a.name as Customers 
from Customers as a
left join Orders as o on
a.id = o.customerId where o.customerId is  null;

