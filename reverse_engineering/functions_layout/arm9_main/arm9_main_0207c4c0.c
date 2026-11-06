
/* JUS-GAME BattleColPrm::Battle_ColPrmManCreate [source-string] __FILE__="BattleColPrm.cpp"
   __FUNCTION__="Battle_ColPrmManCreate" lines=[306] passed to 1 source-location call(s) */

undefined4 *
BattleColPrm::Battle_ColPrmManCreate
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
                    /* JUS-TAG strings=["BattleColPrm.cpp","Battle_ColPrmManCreate"] */
  uStack_14 = param_4;
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0xfb54,s_BattleColPrm_cpp_0209fec4,s_Battle_ColPrmManCreate_0209fb4c,
                              0x132);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar3 = puVar1 + 10;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    } while (puVar3 < puVar1 + 0x36);
    puVar1[0x36] = 0;
    puVar3 = puVar1 + 0x115;
    puVar1[0x37] = 0;
    do {
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar5 = puVar3 + 4;
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
      } while (puVar5 < puVar3 + 10);
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3 = puVar3 + 0x62;
    } while (puVar3 < puVar1 + 0x3215);
    puVar3 = puVar1 + 0x38d5;
    do {
      puVar3[2] = 0;
      puVar3 = puVar3 + 3;
    } while (puVar3 < puVar1 + 0x3ed5);
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_020517fc(puVar1,0,0xfb54);
    uVar2 = FUN_02020d90();
    puVar1[0x38] = uVar2;
    local_18 = 0x9e000;
    FUN_02012940(puVar1[0x38],&local_18);
    FUN_02028384(*(undefined4 *)(puVar1[0x38] + 4),FUN_0207f480);
    (**(code **)(**(int **)(puVar1[0x38] + 4) + 0x24))(*(int **)(puVar1[0x38] + 4),puVar1);
    (**(code **)(**(int **)(puVar1[0x38] + 4) + 0x94))(*(int **)(puVar1[0x38] + 4),0x1000000);
    uVar2 = FUN_02026f94();
    puVar1[0x39] = uVar2;
    local_1c = 0xa5000;
    FUN_02012940(puVar1[0x39],&local_1c);
    FUN_02028384(*(undefined4 *)(puVar1[0x39] + 4),FUN_0207fb60);
    (**(code **)(**(int **)(puVar1[0x39] + 4) + 0x24))(*(int **)(puVar1[0x39] + 4),puVar1);
    (**(code **)(**(int **)(puVar1[0x39] + 4) + 0x94))(*(int **)(puVar1[0x39] + 4),0x1000000);
    uVar2 = FUN_02026f94();
    puVar1[0x3a] = uVar2;
    local_20 = 0xa0000;
    FUN_02012940(puVar1[0x3a],&local_20);
    FUN_02028384(*(undefined4 *)(puVar1[0x3a] + 4),FUN_0207fbb0);
    (**(code **)(**(int **)(puVar1[0x3a] + 4) + 0x24))(*(int **)(puVar1[0x3a] + 4),puVar1);
    (**(code **)(**(int **)(puVar1[0x3a] + 4) + 0x94))(*(int **)(puVar1[0x3a] + 4),0x1000000);
    puVar1[0x3f] = FUN_0207d9a4;
    puVar1[0x40] = FUN_0207d9a8;
    puVar1[0x41] = FUN_0207d9ac;
    puVar1[0x42] = FUN_0207dd40;
    puVar1[0x43] = FUN_0207ddd4;
    puVar1[0x44] = FUN_0207de08;
    puVar1[0x45] = FUN_0207de3c;
    puVar1[0x46] = FUN_0207de44;
    puVar1[0x47] = FUN_0207de4c;
    puVar1[0x4e] = FUN_0207de88;
    puVar1[0x48] = FUN_0207de08;
    puVar1[0x49] = FUN_0207df60;
    puVar1[0x4a] = FUN_0207dfc0;
    puVar1[0x4d] = FUN_0207de80;
    puVar1[0x4b] = FUN_0207dfc8;
    puVar1[0x52] = FUN_0207e010;
    puVar1[0x50] = FUN_0207dfd8;
    puVar1[0x4f] = FUN_0207dff4;
    puVar1[0x51] = FUN_0207dfd8;
    puVar1[0x3b] = param_1;
    puVar1[0x3c] = param_2;
    *(undefined4 *)(param_1 + 0x98) = 0x50000000;
    *(undefined1 *)(puVar1 + 0x53) = 1;
    puVar3 = puVar1 + 0x115;
    iVar4 = 0;
    do {
      FUN_02037b98(puVar1 + 2,puVar3);
      iVar4 = iVar4 + 1;
      puVar3[0x10] = puVar3[0x10] | 0x200;
      puVar3 = puVar3 + 0x62;
    } while (iVar4 < 0x80);
    puVar3 = puVar1 + 0x3215;
    iVar4 = 0;
    do {
      FUN_02037b98(puVar1 + 6,puVar3);
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0xb;
    } while (iVar4 < 0x80);
    puVar3 = puVar1 + 0x38d5;
    iVar4 = 0;
    do {
      FUN_02037b98(puVar1 + 0x36,puVar3);
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar4 < 0x200);
    puVar3 = puVar1 + 0x3795;
    iVar4 = 0;
    do {
      FUN_02037b98(puVar1 + 8,puVar3);
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar4 < 0x50);
    uVar2 = BattleColJoint::Battle_ColJointManCreate(puVar1[0x38]);
    puVar1[0x3d] = uVar2;
    DAT_0214be10 = puVar1;
  }
  return puVar1;
}

