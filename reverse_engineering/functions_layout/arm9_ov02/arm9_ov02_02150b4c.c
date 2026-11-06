
/* JUS-GAME JGalaxyMap::JGalaxyMap_Create [source-string] __FILE__="JGalaxyMap.cpp"
   __FUNCTION__="JGalaxyMap_Create" lines=[101, 751, 1219] passed to 3 source-location call(s);
   header inlines: ALControllerImp.h:Create, ALNodeImp.h:Create */

int * JGalaxyMap::JGalaxyMap_Create(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piVar3 = (int *)thunk_FUN_0201a228(0x28,s_JGalaxyMap_cpp_0215c17c,s_JGalaxyMap_Create_0215c0f4,
                                     0x65);
  FUN_020517fc(piVar3,0,0x28);
  *piVar3 = param_1;
  *(undefined1 *)(piVar3 + 8) = 1;
  *(undefined1 *)((int)piVar3 + 0x21) = 0;
  iVar4 = FUN_0203b424();
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),1);
  iVar4 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),4);
  iVar4 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),0,0);
  iVar4 = FUN_0203b424(0);
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x90))(piVar5,0);
  iVar4 = FUN_0203b424(0);
  local_40 = 0;
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_40);
  iVar4 = FUN_0203b424(1);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),1);
  iVar4 = FUN_0203b424(1);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),4);
  iVar4 = FUN_0203b424(1);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),0,0);
  iVar4 = FUN_0203b424(1);
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x90))(piVar5,0);
  iVar4 = FUN_0203b424(1);
  local_3c = 0x1000;
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_3c);
  iVar4 = FUN_0203b424(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),1);
  iVar4 = FUN_0203b424(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),4);
  iVar4 = FUN_0203b424(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),0,0);
  iVar4 = FUN_0203b424(2);
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x90))(piVar5,0);
  iVar4 = FUN_0203b424(2);
  local_38 = 0x2000;
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_38);
  iVar4 = FUN_0203b424(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),3);
  iVar4 = FUN_0203b424(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),8);
  iVar4 = FUN_0203b424(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar4 + 0x88) + 4),0x20,0x20);
  iVar4 = FUN_0203b424(3);
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x90))(piVar5,0x10000);
  iVar4 = FUN_0203b424(3);
  local_34 = 0x3000;
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x10))(piVar5,&local_34);
  iVar4 = FUN_0203b424(3);
  piVar5 = *(int **)(*(int *)(iVar4 + 0x88) + 4);
  (**(code **)(*piVar5 + 0x94))(piVar5,0);
  cVar2 = '\0';
  for (iVar4 = 0; iVar4 < (int)(**(ushort **)(*piVar3 + 0x2c) - 1); iVar4 = iVar4 + 1) {
    iVar10 = iVar4 * 0x3c + *(int *)(*piVar3 + 0x30);
    bVar1 = false;
    for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)(iVar10 + 0x2c); iVar9 = iVar9 + 1) {
      iVar11 = (uint)*(byte *)(iVar10 + iVar9 + 0x2d) * 0x48 + *(int *)(*piVar3 + 0x34);
      iVar6 = FUN_0214de0c();
      if (iVar6 != 0) {
        for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(iVar11 + 0x44); iVar6 = iVar6 + 1) {
          iVar8 = (int)*(char *)(*(int *)(*piVar3 + 0x38) +
                                 (uint)*(byte *)(iVar11 + iVar6 + 0x38) * 0x40 + 0x2f);
          if ((iVar8 != -1) &&
             (*(byte *)(iVar11 + 0x42) < *(byte *)(iVar8 * 0x48 + *(int *)(*piVar3 + 0x34) + 0x42)))
          {
            bVar1 = true;
            break;
          }
        }
      }
    }
    if (!bVar1) break;
    cVar2 = cVar2 + '\x01';
  }
  *(char *)((int)piVar3 + 0x22) = cVar2;
  iVar4 = FUN_0203b424(3);
  iVar4 = FUN_02156d08((&PTR_s_jgalaxy_map00_0215c108)[*(byte *)((int)piVar3 + 0x22)],
                       *(undefined4 *)(iVar4 + 0x88));
  piVar3[1] = iVar4;
  iVar4 = thunk_FUN_0201a228(0x78,&DAT_0215bfa4,s_Create_0215c0b4,0x4c3);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar4,FUN_02024a30,1);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  iVar4 = piVar5[6];
  piVar3[2] = iVar4;
  piVar5 = *(int **)(iVar4 + 4);
  (**(code **)(*piVar5 + 0xd8))(piVar5,1);
  iVar4 = FUN_0203b3f4();
  iVar4 = FUN_0214d53c(*(byte *)(*piVar3 + 0x51) + 0x50000,0x50000,*(undefined4 *)(iVar4 + 0x88),
                       piVar3[2],0xe1);
  piVar3[3] = iVar4;
  FUN_0214f960(iVar4,&DAT_0215c164);
  piVar5 = *(int **)(piVar3[3] + 4);
  uVar7 = FUN_020326b0(s_Position_0215c18c);
  uVar7 = (**(code **)(*piVar5 + 0x40))(piVar5,s_Position_0215c18c,&local_4c,uVar7);
  FUN_0202c4a4(&local_48,uVar7,local_4c);
  iVar4 = thunk_FUN_0201a228(0x4c,s_ALControllerImp_h_0215c008,s_Create_0215c0bc,0x2ef);
  if (iVar4 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar4,0,local_48,local_44,0x494c,&DAT_0215c158,8,0,0);
  }
  uVar7 = FUN_0214f194();
  FUN_02020f38(piVar3[3],uVar7);
  iVar4 = FUN_0203b3f4();
  iVar4 = FUN_0214d53c((uint)*(byte *)(*piVar3 + 0x51) * 2 + 0x50005,0x50000,
                       *(undefined4 *)(iVar4 + 0x88),piVar3[2],0xe5);
  piVar3[4] = iVar4;
  FUN_0214f960(iVar4,&DAT_0215c170);
  iVar4 = FUN_0203b3f4();
  iVar4 = FUN_0214d53c((uint)*(byte *)(*piVar3 + 0x51) * 2 + 0x5000c,0x50000,
                       *(undefined4 *)(iVar4 + 0x88),piVar3[2],0xe3);
  piVar3[5] = iVar4;
  iVar4 = FUN_0203b3f4();
  iVar4 = FUN_0214d53c(0x5000b,0x50000,*(undefined4 *)(iVar4 + 0x88),piVar3[2],0xe2);
  piVar3[6] = iVar4;
  iVar4 = (uint)*(byte *)(*piVar3 + 0x51) * 2;
  iVar9 = iVar4 + 0x50016;
  if ((uint)*(byte *)(*piVar3 + 0x51) < (uint)*(byte *)((int)piVar3 + 0x22)) {
    iVar9 = iVar4 + 0x50017;
  }
  iVar4 = FUN_0203b3f4();
  iVar4 = FUN_0214d53c(iVar9,0x50000,*(undefined4 *)(iVar4 + 0x88),piVar3[2],0xe4);
  piVar3[7] = iVar4;
  iVar4 = 2;
  do {
    FUN_0214f960(piVar3[iVar4 + 3],&DAT_0215c11c + (uint)*(byte *)(*piVar3 + 0x51) * 3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  local_30 = DAT_0215c11c;
  local_2c = DAT_0215c120;
  local_28 = DAT_0215c124;
  iVar4 = FUN_0203b3f4();
  uVar7 = FUN_0214d53c(0x5000a,0x50000,*(undefined4 *)(iVar4 + 0x88),piVar3[2],0xe5);
  FUN_0214f960(uVar7,&local_30);
  for (iVar4 = 1; iVar4 <= (int)(uint)*(byte *)((int)piVar3 + 0x22); iVar4 = iVar4 + 1) {
    iVar9 = FUN_0203b3f4();
    uVar7 = FUN_0214d53c(0x5000a,0x50000,*(undefined4 *)(iVar9 + 0x88),piVar3[2],0xe5);
    FUN_0214f960(uVar7,&DAT_0215c11c + iVar4 * 3);
  }
  return piVar3;
}

