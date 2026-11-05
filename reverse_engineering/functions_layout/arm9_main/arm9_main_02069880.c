
undefined4 FUN_02069880(int param_1)

{
  int iVar1;
  undefined1 auStack_408 [1024];
  
  FUN_02050f40(auStack_408,0xedb88320);
  iVar1 = FUN_02050e5c(auStack_408,param_1,0x3c);
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return 1;
  }
  return 0;
}

