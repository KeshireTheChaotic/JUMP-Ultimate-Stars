
/* JUS-GAME JGalaxyBattle::JGalaxyBattle_Create [source-string] __FILE__="JGalaxyBattle.cpp"
   __FUNCTION__="JGalaxyBattle_Create" lines=[224, 1219] passed to 3 source-location call(s); header
   inlines: ALNodeImp.h:Create */

int JGalaxyBattle::JGalaxyBattle_Create
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_3c;
  int local_38;
  int local_34 [10];
  
  local_34[9] = param_4;
  iVar2 = thunk_FUN_0201a228(0x90,&DAT_0215c034,s_JGalaxyBattle_Create_0215c01c,0xe0);
  FUN_020517fc(iVar2,0,0x90);
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  FUN_0214d394(param_1);
  FUN_02043264(0);
  iVar3 = FUN_0203b414(0);
  local_34[1] = 0x1000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_34 + 1);
  iVar3 = FUN_0203b414(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b414(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b414(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x20);
  iVar3 = FUN_0203b414(1);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x4000);
  iVar3 = FUN_0203b414(1);
  local_34[2] = 0;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_34 + 2);
  iVar3 = FUN_0203b414(1);
  *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x88) + 4) + 0x956) = 1;
  iVar3 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
  iVar3 = FUN_0203b414(2);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar3 = FUN_0203b414(2);
  local_34[3] = 0x3000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_34 + 3);
  iVar3 = FUN_0203b414(2);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x94))(piVar4,1);
  iVar3 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),3);
  iVar3 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),8);
  iVar3 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x40);
  iVar3 = FUN_0203b414(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x10000);
  iVar3 = FUN_0203b414(3);
  local_34[4] = 0x2000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_34 + 4);
  iVar3 = FUN_0203b414(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x94))(piVar4,1);
  iVar3 = FUN_0203b424(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x20);
  iVar3 = FUN_0203b424(0);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x4000);
  iVar3 = FUN_0203b424(0);
  local_34[5] = 0x1000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_34 + 5);
  iVar3 = FUN_0203b424(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b424(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b424(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x20);
  iVar3 = FUN_0203b424(1);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x4000);
  iVar3 = FUN_0203b424(1);
  local_34[6] = 0;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_34 + 6);
  iVar3 = FUN_0203b424(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b424(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x20);
  iVar3 = FUN_0203b424(2);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x4000);
  iVar3 = FUN_0203b424(2);
  local_34[7] = 0x2000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_34 + 7);
  iVar3 = FUN_0203b424(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
  iVar3 = FUN_0203b424(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
  iVar3 = FUN_0203b424(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x20,0x20);
  iVar3 = FUN_0203b424(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0x8000);
  iVar3 = FUN_0203b424(3);
  local_34[8] = 0x3000;
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,local_34 + 8);
  iVar3 = FUN_0203b424(3);
  piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x94))(piVar4,1);
  bVar1 = *(byte *)(*(int *)(iVar2 + 0x84) + 0x53);
  *(byte *)(iVar2 + 0x8c) = bVar1;
  iVar3 = *(int *)(*(int *)(iVar2 + 0x84) + 0x38) + (uint)bVar1 * 0x40;
  *(int *)(iVar2 + 0x88) = iVar3;
  iVar6 = (uint)*(byte *)(iVar3 + 0x2c) * 0x48 + *(int *)(*(int *)(iVar2 + 0x84) + 0x34);
  iVar3 = thunk_FUN_0201a228(0x78,&DAT_0215bfa4,s_Create_0215bea0,0x4c3);
  if (iVar3 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar3,FUN_02024a30,1);
  }
  uVar5 = FUN_0214d498();
  *(undefined4 *)(iVar2 + 8) = uVar5;
  local_3c = 0x4c000;
  FUN_0214d650(*(undefined4 *)(iVar2 + 8),&local_3c);
  iVar3 = thunk_FUN_0201a228(0x78,&DAT_0215bfa4,s_Create_0215bea0,0x4c3);
  if (iVar3 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar3,FUN_02024a30,1);
  }
  uVar5 = FUN_0214d498();
  *(undefined4 *)(iVar2 + 0xc) = uVar5;
  FUN_0214d6b0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
  local_34[0] = *(short *)(iVar6 + 0x2e) * -0x1000;
  local_38 = *(short *)(iVar6 + 0x2c) * -0x1000;
  FUN_0214d4c0(*(undefined4 *)(iVar2 + 0xc),&local_38,local_34);
  ALNodeImp::Create(iVar2);
  FUN_0214ef80(iVar2);
  ALControllerImp::Create(iVar2);
  FUN_0214f264(iVar2);
  FUN_0214fa1c(iVar2);
  ALControllerImp::Create(iVar2);
  ALWidgetImp::Create(iVar2);
  iVar3 = JGalaxyMenu::JGalaxyMenu_Create
                    (*(undefined4 *)(iVar2 + 0x84),*(undefined4 *)(iVar2 + 0x10),1);
  *(int *)(iVar2 + 0x74) = iVar3;
  *(code **)(iVar3 + 0x1c) = FUN_02150ad4;
  *(int *)(iVar3 + 0x20) = iVar2;
  *(undefined1 *)(*(int *)(iVar2 + 0x74) + 0x25) = 1;
  FUN_0214f1bc(iVar2);
  uVar5 = JGalaxyBackground::JGalaxyBack_Create
                    (*(undefined4 *)(iVar2 + 0xc),*(undefined1 *)(*(int *)(iVar2 + 0x84) + 0x51));
  *(undefined4 *)(iVar2 + 0x70) = uVar5;
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 4));
  if ((DAT_0215cc04 & 1) == 0) {
    FUN_0214edbc(&DAT_0215bec8,0,0x30,0xff,0x98);
    DAT_0215cc04 = DAT_0215cc04 | 1;
  }
  iVar3 = FUN_0203b3f4();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x88) + 4);
  *(undefined1 *)(iVar3 + 0x901) = 1;
  *(undefined2 *)(iVar3 + 0x8e0) = DAT_0215bec8;
  *(undefined2 *)(iVar3 + 0x8e2) = DAT_0215beca;
  *(undefined2 *)(iVar3 + 0x8e4) = DAT_0215becc;
  *(undefined2 *)(iVar3 + 0x8e6) = DAT_0215bece;
  iVar3 = FUN_0203b3f4();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x88) + 4);
  *(undefined1 *)(iVar3 + 0x901) = 1;
  *(undefined4 *)(iVar3 + 0x8cc) = 0x1f;
  iVar3 = FUN_0203b3f4();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x88) + 4);
  *(undefined1 *)(iVar3 + 0x901) = 1;
  *(undefined4 *)(iVar3 + 0x8d4) = 0x1b;
  iVar3 = FUN_0203b3f4();
  FUN_0214ecc0(*(undefined4 *)(iVar3 + 0x88),1,1);
  iVar3 = FUN_0203b3f4();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x88) + 4);
  *(undefined1 *)(iVar3 + 0x901) = 1;
  *(undefined1 *)(iVar3 + 0x8fe) = 1;
  iVar3 = FUN_0203b3f4();
  iVar3 = *(int *)(*(int *)(iVar3 + 0x88) + 4);
  *(undefined1 *)(iVar3 + 0x8ff) = 1;
  *(undefined1 *)(iVar3 + 0x901) = 1;
  return iVar2;
}

