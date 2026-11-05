
/* JUS-GAME BattleProp::Battle_CharaPropChrInit [source-string] __FILE__="BattleProp.cpp"
   __FUNCTION__="Battle_CharaPropChrInit" lines=[648] passed to 1 source-location call(s) */

int BattleProp::Battle_CharaPropChrInit(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* JUS-TAG strings=["BattleProp.cpp","Battle_CharaPropChrInit"] */
  iVar1 = jus_AllocDebug(0xe4,s_BattleProp_cpp_0209fabc,s_Battle_CharaPropChrInit_0209f850,0x288);
  FUN_020517fc(iVar1,0,0xe4);
  iVar2 = iVar1 + 0x70;
  iVar3 = 8;
  do {
    iVar3 = iVar3 + -1;
    *(undefined2 *)(iVar2 + 4) = 0xffff;
    iVar2 = iVar2 + 0xc;
  } while (0 < iVar3);
  *(int *)(iVar1 + 0xd0) = param_2;
  FUN_0202f81c(*(undefined4 *)(param_1 + 4),DAT_0214bd84);
  iVar2 = *(int *)(param_2 + 0x30);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xd4) = iVar1;
  }
  *(int *)(iVar1 + 0xd8) = iVar2;
  *(code **)(param_2 + 0x2c) = FUN_0207a074;
  *(int *)(param_2 + 0x30) = iVar1;
  return iVar1;
}

