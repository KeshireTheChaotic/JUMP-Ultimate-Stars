
/* JUS-GAME BattleMove::Battle_MoveManCreate [source-string] __FILE__="BattleMove.cpp"
   __FUNCTION__="Battle_MoveManCreate" lines=[50] passed to 1 source-location call(s) */

undefined4 * BattleMove::Battle_MoveManCreate(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_18;
  undefined4 local_14;
  
                    /* JUS-TAG strings=["BattleMove.cpp","Battle_MoveManCreate"] */
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x2648,s_BattleMove_cpp_0209ff70,s_Battle_MoveManCreate_0209ff58,0x32);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar3 = puVar1 + 0x12;
    do {
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    } while (puVar3 < puVar1 + 0x192);
  }
  FUN_020517fc(puVar1,0,0x2648);
  uVar2 = FUN_02026f94();
  puVar1[8] = uVar2;
  local_14 = 0xa1000;
  FUN_02012940(puVar1[8],&local_14);
  FUN_02028384(*(undefined4 *)(puVar1[8] + 4),FUN_02082e10);
  (**(code **)(**(int **)(puVar1[8] + 4) + 0x24))(*(int **)(puVar1[8] + 4),puVar1);
  (**(code **)(**(int **)(puVar1[8] + 4) + 0x94))(*(int **)(puVar1[8] + 4),0x2000000);
  uVar2 = FUN_02026f94();
  puVar1[9] = uVar2;
  local_18 = 0xa6000;
  FUN_02012940(puVar1[9],&local_18);
  FUN_02028384(*(undefined4 *)(puVar1[9] + 4),&LAB_0208317c);
  (**(code **)(**(int **)(puVar1[9] + 4) + 0x24))(*(int **)(puVar1[9] + 4),puVar1);
  (**(code **)(**(int **)(puVar1[9] + 4) + 0x94))(*(int **)(puVar1[9] + 4),0x2000000);
  *(undefined2 *)(puVar1 + 0xb) = 0x29;
  *(undefined2 *)((int)puVar1 + 0x2e) = 0x20;
  puVar3 = puVar1 + 0x192;
  uVar4 = 0;
  do {
    FUN_02037b98(puVar1 + 2,puVar3);
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 0x10;
  } while (uVar4 < 0x80);
  puVar3 = puVar1 + 0x12;
  uVar4 = 0;
  do {
    FUN_02037b98(puVar1 + 6,puVar3);
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 3;
  } while (uVar4 < 0x80);
  return puVar1;
}

