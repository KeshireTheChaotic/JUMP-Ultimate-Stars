
/* JUS-GAME BattleObjShot::Battle_ObjShotManCreate [source-string] __FILE__="BattleObjShot.cpp"
   __FUNCTION__="Battle_ObjShotManCreate" lines=[280] passed to 1 source-location call(s) */

undefined4 * BattleObjShot::Battle_ObjShotManCreate(void)

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
           jus_AllocDebug(0x3fd4,s_BattleObjShot_cpp_021728d0,s_Battle_ObjShotManCreate_02172774,
                          0x118);
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
    FUN_020517fc(puVar1,0,0x3fd4);
    iVar2 = FUN_02026f94();
    puVar1[6] = iVar2;
    local_18 = 0x88000;
    (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
    FUN_02028384(*(undefined4 *)(puVar1[6] + 4),FUN_0216af04);
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x24))(*(int **)(puVar1[6] + 4),puVar1);
    (**(code **)(**(int **)(puVar1[6] + 4) + 0x94))(*(int **)(puVar1[6] + 4),0x10000);
    puVar3 = puVar1 + 7;
    uVar4 = 0;
    do {
      FUN_02037b98(puVar1 + 4,puVar3);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x1b;
    } while (uVar4 < 0x48);
    DAT_021729ec = puVar1;
  }
  return puVar1;
}

