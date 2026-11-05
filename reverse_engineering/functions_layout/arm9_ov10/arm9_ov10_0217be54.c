
undefined4 FUN_0217be54(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  iVar3 = 1;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0xd) != '\0') {
    iVar1 = 4;
    do {
      iVar2 = FUN_02178448();
      if (unaff_r5 == *(int *)(iVar2 + iVar1 + 0xf4)) {
        FUN_0217c024(0x41,unaff_r5,in_stack_0000000c,in_stack_00000010);
        iVar1 = FUN_0217af70();
        if (iVar1 == 0) {
          return 1;
        }
        return 0;
      }
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
      iVar2 = FUN_02178448();
    } while (iVar3 <= (int)(uint)*(byte *)(iVar2 + 0xd));
  }
  return 1;
}

