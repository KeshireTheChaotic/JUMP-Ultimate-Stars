
/* JUS-GAME BattleColJoint::Battle_ColJointManCreate [source-string] __FILE__="BattleColJoint.cpp"
   __FUNCTION__="Battle_ColJointManCreate" lines=[67] passed to 1 source-location call(s) */

undefined4 *
BattleColJoint::Battle_ColJointManCreate
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  
                    /* JUS-TAG strings=["BattleColJoint.cpp","Battle_ColJointManCreate"] */
  uStack_14 = param_4;
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x1040,s_BattleColJoint_cpp_0209fb38,s_Battle_ColJointManCreate_0209fb1c,
                          0x43);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
    } while (puVar4 < puVar1 + 6);
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_020517fc(puVar1,0,0x1040);
    iVar2 = FUN_02020d90();
    puVar1[10] = iVar2;
    local_18 = 0xa2000;
    (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
    FUN_02028384(*(undefined4 *)(puVar1[10] + 4),&LAB_0207c190);
    (**(code **)(**(int **)(puVar1[10] + 4) + 0x24))(*(int **)(puVar1[10] + 4),puVar1);
    (**(code **)(**(int **)(puVar1[10] + 4) + 0x94))(*(int **)(puVar1[10] + 4),0x4000000);
    piVar3 = *(int **)(puVar1[10] + 4);
    if (param_1 == 0) {
      (**(code **)(*piVar3 + 0xd4))(piVar3,0);
    }
    else {
      (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(param_1 + 4));
    }
    puVar4 = puVar1 + 0x10;
    uVar5 = 0;
    do {
      FUN_02037b98(puVar1 + 6,puVar4);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 8;
    } while (uVar5 < 0x80);
    DAT_0214be0c = puVar1;
  }
  return puVar1;
}

