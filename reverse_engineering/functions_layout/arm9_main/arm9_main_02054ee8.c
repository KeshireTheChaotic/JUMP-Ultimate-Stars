
void FUN_02054ee8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    FUN_02055684();
  }
  uVar1 = OS_DisableInterrupts();
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = param_4;
  param_1[1] = param_5;
  lVar2 = FUN_02054b44();
  lVar2 = lVar2 + CONCAT44(param_3,param_2);
  FUN_02054f60(param_1,(int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
  OS_RestoreInterrupts(uVar1);
  return;
}

