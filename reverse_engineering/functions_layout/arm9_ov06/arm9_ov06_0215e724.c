
void FUN_0215e724(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215e5a8(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar1 == 0) {
    iVar1 = FUN_0215dec8();
    if (iVar1 == 0) {
      FUN_0215d2e4(param_1);
    }
  }
  else {
    iVar1 = FUN_0215d4e0(param_1);
    if (iVar1 != 0) {
      FUN_02157450(param_1,0x15);
      FUN_0207ce7c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
      FUN_0207ce7c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x20000000);
    }
    iVar1 = FUN_0215d4fc(*(undefined4 *)(param_1 + 0x1a0));
    if (iVar1 == 0) {
      FUN_0207d180(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10));
      FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0);
      if (*(char *)(param_1 + 0x1e7) == '\x01') {
        FUN_02157494(param_1,0x10,FUN_0215e854,&LAB_0215e938,0x10);
      }
      else if (*(char *)(param_1 + 0x1e7) == '\x02') {
        FUN_02157494(param_1,0x10,FUN_0215e94c,&LAB_0215e988,0x10);
      }
    }
  }
  return;
}

