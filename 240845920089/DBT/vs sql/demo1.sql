-- drop procudure if exists pro1;
-- delimiter $
-- create procedure pro1()
-- begin
--       select 'Hello World ' R1;
-- end $

-- delimiter ;


drop procedure if exists pro1;
delimiter $
create procedure pro1()
begin 
	select 'Hello World' R1;
end $

delimiter;
