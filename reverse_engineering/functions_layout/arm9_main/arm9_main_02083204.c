
/* JUS-GAME BattleObj::Battle_ObjManCreate [source-string] __FILE__="BattleObj.cpp"
   __FUNCTION__="Battle_ObjManCreate" lines=[80] passed to 1 source-location call(s) */

int * BattleObj::Battle_ObjManCreate(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_r3;
  uint uVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
                    /* JUS-TAG strings=["BattleObj.cpp","Battle_ObjManCreate"] */
  uStack_14 = in_r3;
  piVar1 = (int *)thunk_FUN_0201a228(0x42d8,s_BattleObj_cpp_0209fff4,s_Battle_ObjManCreate_0209ffe0,
                                     0x50);
  if (piVar1 != (int *)0x0) {
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar5 = piVar1 + 9;
    piVar6 = piVar1 + 0x1d;
    do {
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5 = piVar5 + 2;
    } while (piVar5 < piVar6);
    do {
      *piVar6 = 0;
      piVar6[1] = 0;
      piVar6 = piVar6 + 2;
    } while (piVar6 < piVar1 + 0x21);
    piVar1[0x21] = 0;
    piVar1[0x22] = 0;
    piVar5 = piVar1 + 0x36;
    do {
      piVar5[2] = 0;
      piVar5 = piVar5 + 3;
    } while (piVar5 < piVar1 + 0x4b6);
  }
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_020517fc(piVar1,0,0x42d8);
    iVar2 = FUN_02026f94();
    *piVar1 = iVar2;
    local_18 = 0xa3000;
    FUN_02012940(*piVar1,&local_18);
    FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_02083d70);
    (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
    (**(code **)(**(int **)(*piVar1 + 4) + 0x94))(*(int **)(*piVar1 + 4),0x800000);
    iVar2 = FUN_02026f94();
    piVar1[1] = iVar2;
    local_1c = 0x9c000;
    FUN_02012940(piVar1[1],&local_1c);
    FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_02083f64);
    (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
    (**(code **)(**(int **)(piVar1[1] + 4) + 0x94))(*(int **)(piVar1[1] + 4),0x800000);
    iVar2 = FUN_02026f94();
    local_20 = 0x9f000;
    FUN_02012940(iVar2,&local_20);
    FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_02083f94);
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
    (**(code **)(**(int **)(iVar2 + 4) + 0x94))(*(int **)(iVar2 + 4),0x800000);
    piVar1[2] = iVar2;
    uVar3 = BattleCol::Battle_ColManCreate();
    uVar4 = BattleMove::Battle_MoveManCreate();
    iVar2 = BattleColPrm::Battle_ColPrmManCreate(uVar3,uVar4);
    piVar1[0x23] = iVar2;
    BattleProp::Battle_CharaPropInit();
    piVar5 = piVar1 + 0x4b6;
    uVar7 = 0;
    do {
      FUN_02037b98(piVar1 + 5,piVar5);
      uVar7 = uVar7 + 1;
      piVar5 = piVar5 + 0x10;
    } while (uVar7 < 0xc0);
    piVar5 = piVar1 + 0x36;
    uVar7 = 0;
    do {
      FUN_02037b98(piVar1 + 0x21,piVar5);
      uVar7 = uVar7 + 1;
      piVar5 = piVar5 + 3;
    } while (uVar7 < 0x180);
    DAT_0214be14 = piVar1;
  }
  return piVar1;
}

