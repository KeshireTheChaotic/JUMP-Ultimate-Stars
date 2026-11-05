
undefined4 FUN_02089810(void)

{
  int iVar1;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  if ((DAT_0214bea4 == 5) || (DAT_0214bea4 == 6)) {
    return 1;
  }
  DAT_0214bea4 = 4;
  iVar1 = FUN_02058e64(ALObjectImp::PostSyncMessage + 1,&DAT_0214bf40,&DAT_0214ca38,1,0);
  if (iVar1 == 2) {
    return 1;
  }
  FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0x642);
  return 0;
}

