
/* JUS-GAME CommuMenu::CommuMenu_Add_Core [source-string] __FILE__="CommuMenu.cpp"
   __FUNCTION__="CommuMenu_Add_Core" lines=[178] passed to 1 source-location call(s) */

int CommuMenu::CommuMenu_Add_Core(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  func_0x02199ee8();
  piVar1 = (int *)jus_AllocDebug(0x2c,s_CommuMenu_cpp_02169500,s_CommuMenu_Add_Core_021694ec,0xb2);
  FUN_020517fc(piVar1,0,0x2c);
  DAT_0216ad68 = piVar1;
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0214deac);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
  piVar1[3] = 0;
  piVar1[4] = param_1;
  piVar1[5] = param_2;
  piVar1[6] = param_3;
  piVar1[7] = param_4;
  return *piVar1;
}

