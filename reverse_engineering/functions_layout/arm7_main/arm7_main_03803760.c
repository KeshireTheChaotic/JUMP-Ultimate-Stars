
void FUN_03803760(void)

{
  char cVar1;
  undefined1 local_10;
  char local_f [7];
  
  cVar1 = *(char *)(DAT_03809c80 + 0x48);
  if ((cVar1 != -1) && (DAT_0380a2a0 == 0)) {
    local_10 = 5;
    FUN_03803bb8(2);
    FUN_038039f4(&local_10,0,1,&LAB_03803964);
    FUN_038039f4(0,local_f,1,&LAB_038039b0);
    FUN_03803b34(0,0);
    if (local_f[0] != cVar1) {
      FUN_03803338(cVar1);
    }
    DAT_0380a2a0 = 1;
  }
  return;
}

