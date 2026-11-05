
void FUN_0208b5ec(undefined4 param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="CommGame.cpp" */
  if (((*(char *)(DAT_0214ccec + 0x49) == '\0') &&
      (((iVar1 = FUN_02088934(), iVar1 != 0 || (DAT_0214cce2 != '\0')) || (DAT_0214cce0 != '\0'))))
     && (*(int *)(DAT_0214ccec + 0x24) != 0)) {
    ALObjectImp::PostMessage(param_1,*(int *)(DAT_0214ccec + 0x24),0x70000007,0,0,0);
    *(undefined1 *)(DAT_0214ccec + 0x49) = 1;
  }
  return;
}

