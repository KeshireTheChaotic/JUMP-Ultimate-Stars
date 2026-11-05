
undefined4 FUN_02157a7c(int param_1,undefined4 *param_2)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  int local_18;
  
  psVar1 = (short *)FUN_02155824();
  if (psVar1 != (short *)0x0) {
    FUN_0214cf50(*(undefined4 *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3b8),*psVar1,1,0x9f);
    FUN_0214cebc(*(undefined4 *)(param_1 + 0x3c0),1);
    iVar2 = FUN_0214d500(*(undefined4 *)(param_1 + 0x3b8),(int)*psVar1);
    uVar3 = FUN_0214ceb4(*(undefined4 *)(param_1 + 0x3c0));
    FUN_021500cc(uVar3,*param_2);
    local_1c = 0;
    local_18 = (iVar2 * 0x30 + 8) * 0x1000;
    FUN_0214ce68(uVar3,&local_18,&local_1c);
  }
  return 1;
}

