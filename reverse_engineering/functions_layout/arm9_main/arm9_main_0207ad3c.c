
/* JUS-GAME BattleCol::Battle_ColManCreate [source-string] __FILE__="BattleCol.cpp"
   __FUNCTION__="Battle_ColManCreate" lines=[249] passed to 1 source-location call(s) */

undefined4 * BattleCol::Battle_ColManCreate(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_r3;
  uint uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
                    /* JUS-TAG strings=["BattleCol.cpp","Battle_ColManCreate"] */
  uStack_14 = in_r3;
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x219c,s_BattleCol_cpp_0209fb0c,s_Battle_ColManCreate_0209facc,0xf9);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar3 = puVar1 + 4;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    } while (puVar3 < puVar1 + 0x24);
    puVar3 = puVar1 + 999;
    do {
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    } while (puVar3 < puVar1 + 0x867);
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_020517fc(puVar1,0,0x219c);
    iVar2 = FUN_02026f94();
    puVar1[0x25] = iVar2;
    local_18 = 0x9d000;
    (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
    FUN_02028384(*(undefined4 *)(puVar1[0x25] + 4),FUN_0207b3ec);
    (**(code **)(**(int **)(puVar1[0x25] + 4) + 0x24))(*(int **)(puVar1[0x25] + 4),puVar1);
    (**(code **)(**(int **)(puVar1[0x25] + 4) + 0x94))(*(int **)(puVar1[0x25] + 4),0x1000000);
    puVar3 = puVar1 + 0x27;
    uVar4 = 0;
    do {
      FUN_02037b98(puVar1,puVar3);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 5;
    } while (uVar4 < 0xc0);
    FUN_020517fc(puVar1 + 4,0,0x80);
    *(undefined2 *)(puVar1 + 0x24) = 0;
    DAT_0214be08 = puVar1;
  }
  return puVar1;
}

