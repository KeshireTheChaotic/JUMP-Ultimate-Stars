
void FUN_02063370(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_020af6e8 == 0) {
    DAT_020af6e8 = param_1;
    FUN_02063364(param_1 + 0xc4);
    FUN_02063364(&DAT_020af6ec);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    FUN_02053528(param_1,0x20632c9,param_1,&DAT_020afb10,0x400,0x14);
    FUN_020531dc(param_1);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

