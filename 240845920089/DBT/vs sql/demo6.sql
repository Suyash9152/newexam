drop procedure if exists pro1;
delimiter $
create procedure pro1(in x int)
begin 
     if x = 100 THEN
            select 'Good';
     ELSE
        select 'Not Good';
     end if;
end $
delimiter ;