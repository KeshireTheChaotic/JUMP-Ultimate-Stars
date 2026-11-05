
int FUN_02192b10(int param_1,int param_2,int param_3,uint *param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  int local_20;
  
  iVar2 = *(int *)(param_1 + 0x68);
  if (param_2 < param_3) {
    param_3 = param_2;
  }
  uVar1 = OS_DisableInterrupts();
  do {
    local_20 = FUN_02192aec(param_1);
    if (param_3 <= local_20) {
      if (param_2 <= local_20) {
        local_20 = param_2;
      }
      *param_4 = (uint)*(ushort *)(iVar2 + 0x100);
LAB_02192b66:
      OS_RestoreInterrupts(uVar1);
      return local_20;
    }
    if ((param_5 & 1) == 0) {
      local_20 = 0;
      goto LAB_02192b66;
    }
    FUN_02053290(iVar2 + 0x104);
  } while( true );
}

