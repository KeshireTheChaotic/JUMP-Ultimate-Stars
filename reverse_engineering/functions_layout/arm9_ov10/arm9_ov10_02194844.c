
void FUN_02194844(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_70 [96];
  
  FUN_02196a88(auStack_70);
  uVar1 = OS_DisableInterrupts();
  FUN_021969fc(auStack_70,&DAT_021a9f10,0x14);
  FUN_021969fc(auStack_70,param_1,param_2);
  FUN_021969a8(auStack_70,&DAT_021a9f10);
  OS_RestoreInterrupts(uVar1);
  DAT_021a9f08 = 1;
  return;
}

