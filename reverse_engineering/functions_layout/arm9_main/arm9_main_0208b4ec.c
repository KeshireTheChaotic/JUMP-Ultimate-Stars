
void FUN_0208b4ec(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 in_r3;
  uint uVar3;
  undefined4 local_20;
  
                    /* JUS-TAG source_file_inferred="CommGame.cpp" */
  uVar3 = 1;
  local_20 = in_r3;
  do {
    iVar2 = FUN_0208c14c(uVar3);
    if (iVar2 != -1) {
      uVar1 = FUN_0208c14c(uVar3);
      local_20 = CONCAT22(local_20._2_2_,uVar1);
      FUN_0208a1e0(uVar3 << 8 | 5,&local_20,2,0xfffe);
    }
    if ((uVar3 & 3) == 3) {
      (*DAT_020a0e18)();
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return;
}

