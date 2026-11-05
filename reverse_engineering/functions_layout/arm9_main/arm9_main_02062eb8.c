
void FUN_02062eb8(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    uVar1 = OS_DisableInterrupts();
    param_2[1] = uVar1;
    uVar1 = FUN_02052028(0x27fffe8);
    *param_2 = uVar1 & 0x40;
    if ((*param_2 != 0) || (iVar2 = FUN_020520c8(param_1), iVar2 == 0)) break;
    OS_RestoreInterrupts(param_2[1]);
    SVC_WaitByLoop(1);
  }
  return;
}

