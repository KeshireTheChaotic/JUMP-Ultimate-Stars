
/* JUS-GAME JGalaxyBackground::JGalaxyBack_Create [source-string] __FILE__="JGalaxyBackground.cpp"
   __FUNCTION__="JGalaxyBack_Create" lines=[91, 1219] passed to 2 source-location call(s); header
   inlines: ALNodeImp.h:Create */

int * JGalaxyBackground::JGalaxyBack_Create(int param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [128];
  
  piVar1 = (int *)thunk_FUN_0201a228(0x28,s_JGalaxyBackground_cpp_0215c598,
                                     s_JGalaxyBack_Create_0215c548,0x5b);
  if (piVar1 != (int *)0x0) {
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
  }
  FUN_020517fc(piVar1,0,0x28);
  piVar1[1] = param_1;
  *(undefined1 *)(piVar1 + 9) = param_2;
  iVar2 = thunk_FUN_0201a228(0x78,&DAT_0215bfa4,s_Create_0215c4b0,0x4c3);
  if (iVar2 != 0) {
    jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar2,FUN_02024a30,1);
  }
  iVar2 = FUN_0214d498();
  FUN_0214d678(iVar2,param_1);
  local_ac = 0xfe000;
  piVar3 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_ac);
  *piVar1 = iVar2;
  iVar2 = FUN_0203b414(0);
  local_b8 = 0x1000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_b8);
  iVar2 = FUN_0203b414(2);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),1);
  iVar2 = FUN_0203b414(2);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),4);
  iVar2 = FUN_0203b414(2);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x20,0x20);
  iVar2 = FUN_0203b414(2);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x8000);
  iVar2 = FUN_0203b414(2);
  local_b4 = 0x3000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_b4);
  iVar2 = FUN_0203b414(2);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x94))(piVar3,1);
  iVar2 = FUN_0203b414(3);
  FUN_0203d0b4(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),3);
  iVar2 = FUN_0203b414(3);
  FUN_0203d478(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),8);
  iVar2 = FUN_0203b414(3);
  FUN_0203cfbc(*(undefined4 *)(*(int *)(iVar2 + 0x88) + 4),0x40,0x40);
  iVar2 = FUN_0203b414(3);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x90))(piVar3,0x10000);
  iVar2 = FUN_0203b414(3);
  local_b0 = 0x2000;
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_b0);
  iVar2 = FUN_0203b414(3);
  piVar3 = *(int **)(*(int *)(iVar2 + 0x88) + 4);
  (**(code **)(*piVar3 + 0x94))(piVar3,0);
  iVar2 = FUN_0203b414(2);
  iVar2 = FUN_02156d08(*(undefined4 *)(&DAT_0215c570 + (uint)*(byte *)(piVar1 + 9) * 8),
                       *(undefined4 *)(iVar2 + 0x88));
  piVar1[2] = iVar2;
  if ((&PTR_s_jgalaxy_earth01_0215c574)[(uint)*(byte *)(piVar1 + 9) * 2] != (undefined *)0x0) {
    iVar2 = FUN_0203b414(3);
    iVar2 = FUN_02156d08((&PTR_s_jgalaxy_earth01_0215c574)[(uint)*(byte *)(piVar1 + 9) * 2],
                         *(undefined4 *)(iVar2 + 0x88));
    piVar1[3] = iVar2;
  }
  iVar2 = piVar1[2];
  local_bc = 0;
  local_c0 = 0xfff00000;
  local_c4 = 0x100000;
  FUN_0214e39c(auStack_9c,&local_c4,&local_c0,&local_bc);
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 0;
  FUN_0214e39c(auStack_a8,&local_d0,&local_cc,&local_c8);
  FUN_0214ef10(auStack_d8,iVar2,s_Position_0215c5b0);
  uVar4 = ALControllerImp::Create(auStack_d8,0x494c,auStack_a8,auStack_9c,0x400,2);
  FUN_02020f38(iVar2,uVar4);
  if (*(int *)(&DAT_0215c570 + (uint)*(byte *)(piVar1 + 9) * 8) != 0) {
    thunk_FUN_0207400c(auStack_90);
    thunk_FUN_020741c4(auStack_90,&DAT_0215c5bc);
    FUN_02156cc4(piVar1[2],0);
    FUN_02034db8();
    uVar4 = FUN_02156c8c();
    iVar2 = CommonPaletteAnime::CommonPaletteAnime_Load(uVar4,auStack_90,0x80);
    piVar1[4] = iVar2;
  }
  iVar2 = 0;
  do {
    if (piVar1[iVar2 + 2] != 0) {
      FUN_0214d678(piVar1[iVar2 + 2],*piVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  (*(code *)(&PTR_FUN_0215b074)[*(byte *)(piVar1 + 9)])(piVar1);
  return piVar1;
}

