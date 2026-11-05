
/* JUS-GAME BattleCol::Battle_ColObjCreate [source-string] __FILE__="BattleCol.cpp"
   __FUNCTION__="Battle_ColObjCreate" lines=[367] passed to 1 source-location call(s) */

int BattleCol::Battle_ColObjCreate
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined4 uStack_14;
  
                    /* JUS-TAG strings=["BattleCol.cpp","Battle_ColObjCreate"] */
  uStack_14 = param_4;
  FUN_0201899c(&local_20);
  iVar1 = jus_AllocDebug(0x40,s_BattleCol_cpp_0209fb0c,s_Battle_ColObjCreate_0209fae0,0x16f);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    FUN_020517fc(iVar1,0,0x40);
    FUN_02037b98(param_1 + 8,iVar1);
    *(undefined4 *)(iVar1 + 0x18) = param_2;
    FUN_0207afdc(param_2,&local_20);
    *(short *)(iVar1 + 0x38) = (short)((int)(local_20 + ((uint)(local_20 >> 0xb) >> 0x14)) >> 0xc);
    *(undefined2 *)(iVar1 + 0x34) = *(undefined2 *)(iVar1 + 0x38);
    *(short *)(iVar1 + 0x3a) = (short)((int)(local_1c + ((uint)(local_1c >> 0xb) >> 0x14)) >> 0xc);
    *(undefined2 *)(iVar1 + 0x3c) = *(undefined2 *)(iVar1 + 0x3a);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(iVar1 + 0x3a);
    *(undefined1 **)(iVar1 + 0x1c) = &LAB_0207bd30;
    *(undefined **)(iVar1 + 0x20) = &DAT_0207bd38;
    *(undefined **)(iVar1 + 0x24) = &DAT_0207bd3c;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  return iVar1;
}

