
/* JUS-GAME BattleObjCtrl::Battle_ObjCtrlManCreate [source-string] __FILE__="BattleObjCtrl.cpp"
   __FUNCTION__="Battle_ObjCtrlManCreate" lines=[159] passed to 1 source-location call(s) */

undefined4 * BattleObjCtrl::Battle_ObjCtrlManCreate(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = in_r3;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x314,s_BattleObjCtrl_cpp_02172760,s_Battle_ObjCtrlManCreate_02172748,
                              0x9f);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    FUN_020517fc(puVar1,0,0x314);
    iVar2 = FUN_02026f94();
    puVar1[6] = iVar2;
    local_18 = 0x87000;
    (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
    FUN_02028384(*(undefined4 *)(puVar1[6] + 4),FUN_021691cc);
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x24))(*(int **)(puVar1[6] + 4),puVar1);
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x94))(*(int **)(puVar1[6] + 4),0x800000);
    puVar3 = puVar1 + 7;
    uVar4 = 0;
    do {
      FUN_02037b98(puVar1 + 2,puVar3);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x13;
    } while (uVar4 < 10);
    DAT_02172994 = puVar1;
  }
  return puVar1;
}

