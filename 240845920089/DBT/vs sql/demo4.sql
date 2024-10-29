drop procedure if exists pro1;
delimiter $
create procedure pro1(in x int,in y int, out z int)
begin 
        set z:= x+y;
        select z;
end $

delimiter ;