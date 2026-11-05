
/* JUS-GAME EndingStaffRoll::EndingStaffRoll_Create [source-string] __FILE__="EndingStaffRoll.cpp"
   __FUNCTION__="EndingStaffRoll_Create" lines=[97] passed to 1 source-location call(s) */

int EndingStaffRoll::EndingStaffRoll_Create
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = jus_AllocDebug(0x70,s_EndingStaffRoll_cpp_021619cc,s_EndingStaffRoll_Create_02161904,0x61,
                         param_4);
  FUN_020517fc(iVar1,0,0x70);
  *(undefined4 *)(iVar1 + 0x60) = param_1;
  return iVar1;
}

