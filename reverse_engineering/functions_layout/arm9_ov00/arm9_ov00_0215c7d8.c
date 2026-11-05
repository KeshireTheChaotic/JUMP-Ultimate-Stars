
void FUN_0215c7d8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  char acStack_430 [16];
  undefined1 auStack_420 [256];
  undefined1 auStack_320 [256];
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [256];
  
  if (*(char *)(param_1 + 0x16) != '\0') {
    iVar5 = *(int *)param_1[0x13] + -1;
    iVar1 = FUN_0200d338(iVar5,3);
    iVar3 = 10;
    iVar8 = 0;
    pcVar6 = acStack_430;
    do {
      iVar2 = FUN_0200d338(iVar1,iVar3);
      pcVar7 = pcVar6 + 1;
      *pcVar6 = (char)iVar2 + '0';
      iVar1 = iVar1 - iVar2 * iVar3;
      iVar3 = FUN_0200d338(iVar3,10);
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar7;
    } while (iVar8 < 2);
    *pcVar7 = '\0';
    thunk_FUN_0207400c(auStack_120,s_ending_illust__02161898);
    thunk_FUN_020741c4(auStack_120,acStack_430);
    thunk_FUN_020741c4(auStack_120,&DAT_021618a8);
    uVar4 = FUN_020101f4(auStack_120,0);
    param_1[2] = uVar4;
    thunk_FUN_0207400c(auStack_220,s_demo__021618b0);
    thunk_FUN_020741c4(auStack_220,(&PTR_DAT_0209e840)[*(int *)param_1[0x13]]);
    thunk_FUN_020741c4(auStack_220,s__title_021618b8);
    thunk_FUN_0207400c(auStack_320,auStack_220);
    thunk_FUN_020741c4(auStack_320,&DAT_021618c0);
    thunk_FUN_0207400c(auStack_420,auStack_220);
    thunk_FUN_020741c4(auStack_420,&DAT_021618c8);
    uVar4 = param_1[0x14];
    if (*(char *)((int)param_1 + 0x59) == '\0') {
      local_458 = 0xb0000;
      FUN_0200d338(iVar5,3);
      iVar3 = FUN_0214eddc(iVar5 * 2 + 0xa00000,(iVar5 - extraout_r1_00) * 2 + 0xa00000,uVar4,
                           &local_458,0);
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      param_1[4] = iVar3;
      FUN_0214f3e0(iVar3,param_1[3]);
      uVar4 = FUN_0214ec98(auStack_320,auStack_420,param_1[0x15]);
      param_1[1] = uVar4;
      local_448 = 0x48000;
      local_444 = 0x80000;
      FUN_0214f418(param_1[1],&local_444,&local_448);
      local_450 = 0x60000;
      local_44c = 0x80000;
      FUN_0215cb10(param_1[1],&local_44c,&local_450);
      FUN_0214f3e0(param_1[1],*param_1);
      if (*(char *)((int)param_1 + 0x5a) != '\0') {
        FUN_0214efac(param_1 + 10,*(undefined4 *)param_1[0x13],param_1[0x14],*param_1,0,
                     *(char *)((int)param_1 + 0x5a));
      }
    }
    else {
      local_454 = 0xb0000;
      FUN_0200d338(iVar5,3);
      iVar3 = FUN_0214eddc(iVar5 * 2 + 0xa00001,(iVar5 - extraout_r1) * 2 + 0xa00000,uVar4,
                           &local_454,0);
      (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
      param_1[4] = iVar3;
      FUN_0214f3e0(iVar3,param_1[3]);
      uVar4 = FUN_0214ec98(auStack_320,auStack_420,param_1[0x15]);
      param_1[1] = uVar4;
      local_438 = 0x60000;
      local_434 = 0x80000;
      FUN_0215cb10(param_1[1],&local_434,&local_438);
      local_440 = 0x48000;
      local_43c = 0x80000;
      FUN_0214f418(param_1[1],&local_43c,&local_440);
      FUN_0214f3e0(param_1[1],*param_1);
      if (*(char *)((int)param_1 + 0x5a) != '\0') {
        FUN_0214efac(param_1 + 10,*(undefined4 *)param_1[0x13],param_1[0x14],*param_1,1,
                     *(char *)((int)param_1 + 0x5a));
      }
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}

