
/* JUS-GAME BattleCol::Battle_ColObjAddColWork [source-string] __FILE__="BattleCol.cpp"
   __FUNCTION__="Battle_ColObjAddColWork" lines=[549] passed to 1 source-location call(s) */

int BattleCol::Battle_ColObjAddColWork(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG strings=["BattleCol.cpp","Battle_ColObjAddColWork"] */
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar1 = jus_AllocDebug(100,s_BattleCol_cpp_0209fb0c,s_Battle_ColObjAddColWork_0209faf4,0x225);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_020517fc(iVar1,0,100);
  FUN_02037b98(param_1 + 8,iVar1);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined2 *)(iVar1 + 0xe) = param_2;
  *(int *)(iVar1 + 0x20) = param_1;
  *(undefined1 *)(iVar1 + 0x18) = 0x20;
  uVar2 = (**(code **)(param_1 + 0x1c))(param_1,iVar1);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  return iVar1;
}

