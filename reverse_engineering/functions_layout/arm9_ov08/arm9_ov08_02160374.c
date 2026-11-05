
void FUN_02160374(void)

{
  int iVar1;
  int iVar2;
  int local_18;
  undefined1 auStack_14 [10];
  char local_a;
  
  iVar1 = FUN_021622d4();
  MIi_CpuCopy32(&DAT_0216ad18,auStack_14,0xc);
  FUN_02157038(0,&local_18);
  if (local_18 == 2) {
    local_a = '\x04';
  }
  else {
    local_a = *(char *)(iVar1 + 0xf4) + '\x01';
  }
  iVar2 = FUN_020676b8(auStack_14);
  if (iVar2 == 0) {
    FUN_02055684();
  }
  if (local_18 == 0) {
    FUN_02067554(*(undefined1 *)(iVar1 + 0xf4),iVar1);
  }
  FUN_02167814(0,&LAB_021601dc_1,0,0x78);
  return;
}

