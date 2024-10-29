drop procedure if exists pro1;
delimiter $
create procedure pro1(x int,in y int)
begin 
        select x+y;
end $

delimiter ;