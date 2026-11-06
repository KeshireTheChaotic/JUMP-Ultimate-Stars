
void FUN_0200199c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
                    /* JUS-TAG strings=["OS_IsTickAvailable() == TRUE","nonport.c"] */
  iVar1 = FUN_02054c7c();
  if (iVar1 != 1) {
    FUN_02002068(s_OS_IsTickAvailable______TRUE_02092fe0,s_nonport_c_02093000,0,0x667);
  }
  lVar3 = OS_GetTick();
  uVar2 = FUN_0200d0c4((int)(lVar3 << 6),(int)((ulonglong)(lVar3 << 6) >> 0x20),0x1ff6210,0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}

