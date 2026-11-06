
void FUN_02001650(int *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["hashtable.c","table"] */
  if (param_1 == (int *)0x0) {
    FUN_02002068(0x2092f94,0x2092f88,0,0x51);
  }
  else {
    iVar2 = 0;
    if (0 < param_1[1]) {
      iVar1 = 0;
      do {
        FUN_02001320(*(undefined4 *)(*param_1 + iVar1));
        iVar1 = iVar1 + 4;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[1]);
    }
    func_0x02175814(*param_1);
    func_0x02175814(param_1);
  }
  return;
}

