
undefined4 FUN_021bb40c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (char)param_1[0x26] * 0x24 + *param_1;
  for (iVar3 = 0; iVar3 < *(char *)((int)param_1 + 0x9e); iVar3 = iVar3 + 1) {
    FUN_020517fc((int)param_1 + iVar3 * 0x2a + 0xcf,0,0x2a);
    thunk_FUN_0207400c((int)param_1 + iVar3 * 0x2a + 0xcf,
                       iVar2 + 4 + iVar3 * 4 + *(int *)(iVar2 + iVar3 * 4 + 4));
  }
  thunk_FUN_0207400c((int)param_1 + *(char *)((int)param_1 + 0x9e) * 0x2a + 0xcf,&DAT_021d3f98);
  FUN_02074374((int)param_1 + *(char *)((int)param_1 + 0x9e) * 0x2a + 0xcf,param_1[0x20],5,0,param_4
              );
  cVar1 = *(char *)((int)param_1 + 0x9f);
  iVar2 = FUN_02074294((int)param_1 + *(char *)((int)param_1 + 0x9e) * 0x2a + 0xcf);
  if (cVar1 <= iVar2) {
    cVar1 = FUN_02074294((int)param_1 + *(char *)((int)param_1 + 0x9e) * 0x2a + 0xcf);
  }
  *(char *)((int)param_1 + 0x9f) = cVar1;
  *(char *)((int)param_1 + 0x9e) = *(char *)((int)param_1 + 0x9e) + '\x01';
  return 0;
}

