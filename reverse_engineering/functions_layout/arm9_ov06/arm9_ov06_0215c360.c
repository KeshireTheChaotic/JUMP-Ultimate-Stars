
void FUN_0215c360(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x18) != '\x17' && *(char *)(param_1 + 0x18) != '\x18') &&
     (iVar1 = FUN_0215aea0(*(undefined4 *)(param_1 + 0x1a8)), iVar1 != 0)) {
    FUN_0206c650(**(undefined4 **)(param_1 + 0x1a0));
    FUN_0215b460(param_1);
    FUN_0207ce7c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
    FUN_0207d180(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10));
    FUN_0215911c(param_1,1);
    FUN_0215911c(param_1,0);
    FUN_0215c050(param_1);
    if ((int)*(char *)(param_1 + 0x1e0) == (uint)*(byte *)(DAT_02172968 + 0x30)) {
      *(byte *)(DAT_02172968 + 0x2e) = *(byte *)(DAT_02172968 + 0x2e) | 1;
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x28) != 0) {
      FUN_0207d418();
    }
    if (*(char *)(DAT_02172960 + 200) == '\0') {
      FUN_02157494(param_1,0x17,FUN_0215c5d4,&LAB_0215c664,0x10);
    }
    else {
      FUN_02157494(param_1,0x17,FUN_0215c488,&LAB_0215c664,0x10);
    }
    FUN_0207342c(0x7a,2);
  }
  return;
}

