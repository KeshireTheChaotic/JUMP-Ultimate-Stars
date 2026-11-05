
void FUN_02069784(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_408 [1024];
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  FUN_02050f40(auStack_408,0xedb88320);
  uVar1 = FUN_02050e5c(auStack_408,param_1,0x3c);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return;
}

