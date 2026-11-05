
void FUN_02159a60(int param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  int local_14;
  int local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(short *)(iVar1 + 0xa2) == 0) {
    FUN_021536c4(auStack_18,**(undefined4 **)(iVar1 + 0x1a0));
    FUN_021536a4(*(undefined4 *)(iVar1 + 0x84),auStack_18);
  }
  else {
    FUN_021536c4(&local_14,**(undefined4 **)(iVar1 + 0x1a0));
    local_10 = local_14 + -0x8000;
    FUN_021536a4(*(undefined4 *)(iVar1 + 0x84),&local_10);
  }
  FUN_0214f068(&local_20,**(undefined4 **)(iVar1 + 0x1a0));
  local_1c = local_20 + -0x40000;
  FUN_02153684(param_1,&local_1c);
  return;
}

