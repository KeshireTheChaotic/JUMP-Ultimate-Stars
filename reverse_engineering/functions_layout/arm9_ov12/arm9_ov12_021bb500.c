
undefined4 FUN_021bb500(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = (char)param_1[0x26] * 0x24 + *param_1;
  cVar1 = *(char *)((int)param_1 + 0x9e);
  iVar6 = cVar1 + -2;
  for (iVar7 = 0; iVar7 < iVar6; iVar7 = iVar7 + 1) {
    iVar4 = iVar7 * 0x2a;
    FUN_020517fc((int)param_1 + iVar4 + 0xcf,0,0x2a);
    param_4 = 0x13;
    FUN_02074080((int)param_1 + iVar4 + 0xcf,iVar5 + 4 + iVar7 * 4 + *(int *)(iVar5 + iVar7 * 4 + 4)
                 ,(int)param_1 + 0xaa,&DAT_021d3f94,0x13);
    cVar3 = *(char *)((int)param_1 + 0x9f);
    cVar2 = FUN_02074294((int)param_1 + iVar4 + 0xcf);
    if (cVar3 <= cVar2) {
      cVar3 = FUN_02074294((int)param_1 + iVar4 + 0xcf);
    }
    *(char *)((int)param_1 + 0x9f) = cVar3;
  }
  iVar7 = iVar6 * 0x2a;
  FUN_020517fc((int)param_1 + iVar7 + 0xcf,0);
  if (param_1[0x20] == 0) {
    thunk_FUN_0207400c((int)param_1 + iVar7 + 0xcf,
                       iVar5 + 4 + iVar6 * 4 + *(int *)(iVar5 + iVar6 * 4 + 4));
  }
  else {
    iVar4 = cVar1 + -1;
    iVar6 = iVar5 + 4 + iVar4 * 4;
    thunk_FUN_0207400c((int)param_1 + iVar7 + 0xcf,iVar6 + *(int *)(iVar5 + iVar4 * 4 + 4),iVar6,
                       iVar4,param_4);
  }
  *(char *)((int)param_1 + 0x9e) = *(char *)((int)param_1 + 0x9e) + -1;
  return 0;
}

