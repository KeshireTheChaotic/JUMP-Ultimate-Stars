
/* JUS-SCENE jus_Scene04_Create [scene-map] scene table 0209e32c row 4 create; slot-1 overlay 1 */

void jus_Scene04_Create(void)

{
  if (*(char *)(iRam0206e8b4 + 0x14) == '\0') {
    func_0x021572b8(*(uint *)(iRam0206e8b4 + 0x40) & 0xff);
    return;
  }
  func_0x021572b8(6);
  return;
}

