
void FUN_02001ed8(void)

{
  int iVar1;
  longlong lVar2;
  
                    /* JUS-TAG strings=["OS_IsTickAvailable() == TRUE","nonport.c"] */
  iVar1 = FUN_02054c7c();
  if (iVar1 != 1) {
    FUN_02002068(s_OS_IsTickAvailable______TRUE_02092fe0,s_nonport_c_02093000,0,0x109);
  }
  lVar2 = OS_GetTick();
  FUN_0200d0c4((int)(lVar2 << 6),(int)((ulonglong)(lVar2 << 6) >> 0x20),0x82ea,0);
  return;
}

