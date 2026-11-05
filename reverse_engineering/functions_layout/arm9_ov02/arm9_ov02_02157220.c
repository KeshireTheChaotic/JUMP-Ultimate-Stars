
/* JUS-SCENE jus_Scene14_CreateImpl [scene-map] called by scene 14 create wrapper 0206f038 while
   overlay 2 is resident */

int jus_Scene14_CreateImpl(short param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0 [7];
  undefined1 auStack_a4 [128];
  
  iVar1 = FUN_0203b404();
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x88) + 4);
  FUN_0215790c();
  DAT_020a0dd0 = uVar6;
  FUN_0214d6e8();
  piVar2 = (int *)thunk_FUN_0201a228(0xa8c,s_Demo_cpp_0215ca94,s_Demo_Add_0215c778,0x174);
  if (piVar2 != (int *)0x0) {
    piVar4 = piVar2 + 8;
    do {
      piVar9 = piVar4 + 1;
      do {
        FUN_021518d4(piVar9 + 2);
        piVar9 = piVar9 + 7;
      } while (piVar9 < piVar4 + 99);
      piVar9 = piVar4 + 0xdc;
      do {
        FUN_021518d4(piVar9);
        piVar9 = piVar9 + 3;
      } while (piVar9 < piVar4 + 0x106);
      piVar4 = piVar4 + 0x137;
    } while (piVar4 < piVar2 + 0x276);
  }
  FUN_020517fc(piVar2,0,0xa8c);
  *(undefined1 *)(piVar2 + 5) = 0;
  iVar1 = FUN_02026f94();
  piVar2[1] = iVar1;
  local_c8 = 0x80000;
  (**(code **)(**(int **)(iVar1 + 4) + 0xa0))(*(int **)(iVar1 + 4),&local_c8);
  FUN_02028384(*(undefined4 *)(piVar2[1] + 4),FUN_02157960);
  (**(code **)(**(int **)(piVar2[1] + 4) + 0x24))(*(int **)(piVar2[1] + 4),piVar2);
  iVar1 = FUN_020310f4();
  *piVar2 = iVar1;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar1 + 4));
  iVar1 = 1;
  do {
    iVar3 = FUN_0203b414(iVar1);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
    iVar3 = FUN_0203b414(iVar1);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
    iVar3 = FUN_0203b414(iVar1);
    piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x90))(piVar4,0);
    iVar3 = FUN_0203b414(iVar1);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x40);
    iVar3 = FUN_0203b414(iVar1);
    piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x94))(piVar4,0);
    iVar3 = FUN_0203b424(iVar1);
    FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),1);
    iVar3 = FUN_0203b424(iVar1);
    FUN_0203d478(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),4);
    iVar3 = FUN_0203b424(iVar1);
    piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x90))(piVar4,0);
    iVar3 = FUN_0203b424(iVar1);
    FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar3 + 0x88) + 4),0x40,0x40);
    iVar3 = FUN_0203b424(iVar1);
    piVar4 = *(int **)(*(int *)(iVar3 + 0x88) + 4);
    (**(code **)(*piVar4 + 0x94))(piVar4,0);
    *(undefined1 *)((int)piVar2 + iVar1 * 4 + 0x4e2) = 0;
    *(undefined1 *)((int)piVar2 + iVar1 * 4 + 0x4e3) = 0x40;
    *(undefined1 *)(piVar2 + iVar1 + 0x139) = 0x40;
    *(undefined1 *)((int)piVar2 + iVar1 * 4 + 0x4e5) = 4;
    *(undefined1 *)((int)piVar2 + iVar1 * 4 + 0x9be) = 0;
    *(undefined1 *)((int)piVar2 + iVar1 * 4 + 0x9bf) = 0x40;
    *(undefined1 *)(piVar2 + iVar1 + 0x270) = 0x40;
    iVar3 = iVar1 + 1;
    *(undefined1 *)((int)piVar2 + iVar1 * 4 + 0x9c1) = 4;
    iVar1 = iVar3;
  } while (iVar3 < 4);
  iVar1 = FUN_0203b414(0);
  local_cc = 0x3000;
  piVar4 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_cc);
  iVar1 = FUN_0203b424(0);
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x88) + 4);
  FUN_0215790c();
  DAT_020a0dd0 = uVar6;
  iVar1 = FUN_0203b424(0);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),1);
  iVar1 = FUN_0203b424(0);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),4);
  iVar1 = FUN_0203b424(0);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar1 + 0x88) + 4),0x20,0x20);
  iVar1 = FUN_0203b424(0);
  local_d0 = 0x3000;
  piVar4 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x10))(piVar4,&local_d0);
  iVar1 = FUN_0203b424(0);
  piVar4 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar4 + 0x90))(piVar4,0);
  FUN_0214d6e8();
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  iVar1 = FUN_0203b3e4();
  FUN_02155808(*(undefined4 *)(iVar1 + 0x88),local_c0 + 6,local_c0 + 5,local_c0 + 4);
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  iVar1 = FUN_0203b3f4();
  FUN_02155808(*(undefined4 *)(iVar1 + 0x88),local_c0 + 3,local_c0 + 2,local_c0 + 1);
  *(short *)((int)piVar2 + 0xa86) = param_1;
  iVar1 = FUN_020101f4(s_demo_demo_aar_0215caa0,0);
  piVar2[0x280] = iVar1;
  piVar4 = (int *)FUN_02033410((&PTR_s_demo_opening_mdf_0215c6a4)[param_1],0,0);
  if (piVar4[7] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  iVar1 = piVar4[7];
  piVar2[6] = iVar1;
  piVar4 = *(int **)(iVar1 + 4);
  iVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4,0);
  iVar3 = 0;
  piVar2[7] = iVar1;
  for (iVar1 = 0; iVar1 < *(short *)piVar2[7]; iVar1 = iVar1 + 1) {
    *(undefined2 *)(piVar2 + iVar1 * 0x137 + 0x124) = 0;
    *(undefined2 *)((int)piVar2 + iVar1 * 0x4dc + 0x492) = 0;
    iVar3 = piVar2[7] + (uint)*(ushort *)(piVar2[7] + 10) + iVar3;
    piVar2[iVar1 * 0x137 + 8] = iVar3;
    piVar2[iVar1 * 0x137 + 0xdb] = iVar3 + (uint)*(ushort *)(iVar3 + 6);
    iVar3 = FUN_02020d90();
    piVar2[iVar1 * 0x137 + 0xda] = iVar3;
    local_c4 = (int)*(short *)((int)piVar2 + iVar1 * 0x4dc + 0x492) << 0xc;
    local_c0[0] = (int)(short)piVar2[iVar1 * 0x137 + 0x124] << 0xc;
    FUN_0214d4c0(piVar2[iVar1 * 0x137 + 0xda],local_c0,&local_c4);
    (**(code **)(**(int **)(piVar2[iVar1 * 0x137 + 0xda] + 4) + 0xd8))
              (*(int **)(piVar2[iVar1 * 0x137 + 0xda] + 4),1);
    if (*(short *)(piVar2[iVar1 * 0x137 + 8] + 4) == 0) {
      *(undefined1 *)(piVar2 + iVar1 * 0x137 + 0x139) = 1;
      *(short *)(piVar2 + 0x2a1) = (short)piVar2[0x2a1] + 1;
    }
    iVar3 = *(int *)piVar2[iVar1 * 0x137 + 8];
    iVar8 = 0;
    *(undefined1 *)((int)piVar2 + iVar1 * 0x4dc + 0x4f3) = 0xff;
    do {
      iVar5 = iVar8 + iVar1 * 0x4dc;
      iVar8 = iVar8 + 1;
      *(undefined1 *)((int)piVar2 + iVar5 + 0x370) = 0xff;
    } while (iVar8 < 0xe);
  }
  uVar10 = 0;
  for (iVar1 = 0; iVar1 < *(short *)piVar2[7]; iVar1 = iVar1 + 1) {
    iVar8 = piVar2[iVar1 * 0x137 + 8];
    pcVar7 = (char *)(iVar8 + (uint)*(ushort *)(iVar8 + 6));
    for (iVar3 = 0; iVar3 < *(short *)(iVar8 + 4); iVar3 = iVar3 + 1) {
      if ((*pcVar7 == '\0') && (3 < (byte)pcVar7[4])) {
        thunk_FUN_0207400c(auStack_a4,s_demo__0215cab0);
        thunk_FUN_020741c4(auStack_a4,pcVar7 + 0x14);
        iVar5 = FUN_020101f4(auStack_a4,0);
        piVar2[uVar10 + 0x281] = iVar5;
        uVar10 = uVar10 + 1 & 0xff;
      }
      pcVar7 = pcVar7 + *(ushort *)(pcVar7 + 2);
    }
  }
  iVar1 = FUN_02028920(0);
  piVar2[2] = iVar1;
  iVar1 = FUN_020208ec(0);
  piVar2[3] = iVar1;
  FUN_020517fc(piVar2 + 0x276,0,0x14);
  iVar1 = FUN_02026f94();
  piVar2[0x276] = iVar1;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),piVar2 + 0x276);
  FUN_02028384(*(undefined4 *)(piVar2[0x276] + 4),FUN_02159fe4);
  *(undefined1 *)(piVar2 + 0x278) = *(undefined1 *)(piVar2[7] + 4);
  piVar2[0x277] = piVar2[7] + 0xc;
  iVar1 = thunk_FUN_0201a228((uint)*(byte *)(piVar2 + 0x278) << 2,s_Demo_cpp_0215ca94,
                             s_Demo_InitTexture_0215c99c,0xa0d);
  piVar2[0x27a] = iVar1;
  FUN_020517fc(iVar1,0,(uint)*(byte *)(piVar2 + 0x278) << 2);
  while (*(byte *)((int)piVar2 + 0x9e1) < *(byte *)(piVar2[7] + 5)) {
    FUN_02159f24(piVar2 + 0x276);
  }
  DAT_020a10a8 = 0x2000;
  FUN_02073ebc(2,1);
  return *piVar2;
}

