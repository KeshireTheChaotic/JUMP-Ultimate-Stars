
void FUN_02191818(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *local_18;
  
  while( true ) {
    FUN_02053aa0(param_1,&local_18,1);
    if (local_18 == (undefined4 *)0x0) break;
    uVar1 = (*(code *)*local_18)();
    uVar2 = OS_DisableInterrupts();
    FUN_02052e00();
    FUN_02053bd8(param_1,0,0);
    if (local_18[1] != 0) {
      *(undefined4 *)(local_18[1] + 0x6c) = uVar1;
    }
    if (local_18[2] != 0) {
      FUN_02053c84(local_18[2],uVar1,0);
    }
    FUN_0219195c(local_18);
    FUN_02052dc8();
    OS_RestoreInterrupts(uVar2);
  }
  return;
}

