
void FUN_021bdbd8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int extraout_r1;
  int unaff_r4;
  int iVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [16];
  char local_54 [64];
  
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar5 = FUN_0203b414(3);
    unaff_r4 = *(int *)(iVar5 + 0x88);
  }
  else if (*(int *)(param_1 + 0x54) == 1) {
    iVar5 = FUN_0203b424(3);
    unaff_r4 = *(int *)(iVar5 + 0x88);
  }
  piVar1 = (int *)FUN_020101f4(s_info_chr_chr_aar_021d40b0,0);
  FUN_021bbf80();
  FUN_0203d0b4(*(undefined4 *)(unaff_r4 + 4),3);
  FUN_0203d478(*(undefined4 *)(unaff_r4 + 4),8);
  FUN_0203cfbc(*(undefined4 *)(unaff_r4 + 4),0x40,0x40);
  (**(code **)(**(int **)(unaff_r4 + 4) + 0x90))(*(int **)(unaff_r4 + 4),0x8000);
  local_70 = 0x1000;
  (**(code **)(**(int **)(unaff_r4 + 4) + 0x10))(*(int **)(unaff_r4 + 4),&local_70);
  iVar5 = 0;
  *(undefined1 *)(*(int *)(unaff_r4 + 4) + 0x956) = 0;
  if (*(int *)(param_1 + 0x50) == -1) {
    uVar4 = 0;
    do {
      if ((1 << (uVar4 & 0x1f) & (&DAT_020b0ba4)[uVar4 >> 5]) != 0) {
        local_54[iVar5] = (char)uVar4;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x2a);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    else {
      uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_0200d338(uVar2,iVar5);
      *(int *)(param_1 + 0x50) = (int)local_54[extraout_r1];
    }
  }
  DAT_020a0dd0 = *(undefined4 *)(unaff_r4 + 4);
  thunk_FUN_0207400c(auStack_64,s_info_chr__021d40c4);
  if (*(int *)(param_1 + 0x50) == 0) {
    thunk_FUN_020741c4(auStack_64,&DAT_021d40d0);
  }
  else {
    thunk_FUN_020741c4(auStack_64,(&PTR_DAT_0209e840)[*(int *)(param_1 + 0x50)]);
  }
  thunk_FUN_0207400c(local_54,auStack_64);
  thunk_FUN_020741c4(local_54,&DAT_021d40d4);
  uVar2 = FUN_021bdb10(local_54);
  thunk_FUN_0207400c(local_54,auStack_64);
  thunk_FUN_020741c4(local_54,&DAT_021d40dc);
  FUN_02036ab8();
  iVar5 = FUN_021acab4();
  *(int *)(param_1 + 0x20) = iVar5;
  (**(code **)(**(int **)(iVar5 + 4) + 0x130))(*(int **)(iVar5 + 4),local_54);
  FUN_021bdb3c(*(undefined4 *)(param_1 + 0x20),uVar2,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x20) + 4);
  if (*(int *)(param_1 + 0x18) == 0) {
    (**(code **)(*piVar3 + 0xd4))(piVar3,0);
  }
  else {
    (**(code **)(*piVar3 + 0xd4))(piVar3,*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  }
  local_6c = 0;
  local_68 = 0;
  FUN_021bb970(*(undefined4 *)(param_1 + 0x20),&local_68,&local_6c);
  piVar3 = *(int **)(*(int *)(param_1 + 0x20) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  FUN_02034d7c(uVar2);
  FUN_021bc03c();
  (**(code **)(*piVar1 + 0xc))();
  return;
}

