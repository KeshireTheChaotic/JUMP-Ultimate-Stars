
void FUN_0215337c(void)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_0216d170 != 0) {
    iVar2 = FUN_021539a0();
    if (iVar2 != 0) {
      do {
        bVar1 = true;
        FUN_02052ea0(10);
        iVar2 = FUN_021536a8();
        while (iVar2 != 0) {
          if ((iVar2 != 4) && (iVar2 != 5)) {
            if (iVar2 == 0xe) {
              bVar1 = false;
            }
            else {
              bVar1 = false;
            }
          }
          iVar2 = FUN_021536a8();
        }
      } while (bVar1);
    }
    DAT_0216d170 = 0;
  }
  if (DAT_0216d174 != 0) {
    DAT_0216d174 = 0;
    func_0x02193678();
  }
  return;
}

