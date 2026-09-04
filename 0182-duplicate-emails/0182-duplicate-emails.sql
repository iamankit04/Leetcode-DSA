select e.email as Email 
from Person e group by
email having count(*) > 1 ; 
